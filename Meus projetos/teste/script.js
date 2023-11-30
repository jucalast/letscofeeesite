const cards = document.querySelectorAll('.card');
const prevButton = document.querySelector('.arrow-prev');
const nextButton = document.querySelector('.arrow-next');

let currentIndex = 0;

prevButton.addEventListener('click', () => {
  if (currentIndex > 0) {
    cards[currentIndex].classList.remove('active');
    currentIndex--;
    cards[currentIndex].classList.add('active');
  }
});

nextButton.addEventListener('click', () => {
  if (currentIndex < cards.length - 1) {
    cards[currentIndex].classList.remove('active');
    currentIndex++;
    cards[currentIndex].classList.add('active');
  }
});
