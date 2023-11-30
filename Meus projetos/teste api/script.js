// Função para renderizar os cards de filmes
function renderMovieCards(movies) {
    const movieCardsContainer = document.getElementById('movie-cards');
    movieCardsContainer.innerHTML = ''; // Limpa o conteúdo anterior

    if (movies.length === 0) {
        // Caso não haja filmes encontrados
        movieCardsContainer.innerHTML = '<p>Nenhum resultado encontrado</p>';
        return;
    }

    for (const movie of movies) {
        const movieCard = document.createElement('div');
        movieCard.className = 'movie-card';
        movieCard.innerHTML = `
            <h3>${movie.title}</h3>
            <p>Episódio: ${movie.episode_id}</p>
            <p>Abertura: ${movie.opening_crawl}</p>
            <p>Diretor: ${movie.director}</p>
            <p>Produtor: ${movie.producer}</p>
            <p>Data de lançamento: ${movie.release_date}</p>
        `;
        movieCardsContainer.appendChild(movieCard);
    }
}

// Função de pesquisa de filmes
function searchMovies(searchTerm) {
    fetch(`https://swapi.dev/api/films/?search=${searchTerm}`)
        .then(response => response.json())
        .then(data => {
            const filteredMovies = data.results.filter(movie => {
                return movie.title.toLowerCase().includes(searchTerm.toLowerCase());
            });
            renderMovieCards(filteredMovies);
        })
        .catch(error => console.error('Erro ao buscar filmes:', error));
}

// Ouvinte de eventos para o envio do formulário
document.getElementById('search-form').addEventListener('submit', function (event) {
    event.preventDefault();
    const searchTerm = document.getElementById('search-input').value;
    searchMovies(searchTerm);
});
