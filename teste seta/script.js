document.addEventListener("DOMContentLoaded", function () {
    const cardsContainer = document.querySelector('.cards');
    const cards = document.querySelectorAll('.card');
    const prevBtn = document.getElementById('prevBtn');
    const nextBtn = document.getElementById('nextBtn');
  
    let currentIndex = 0;
  
    function showCard(index) {
      cardsContainer.style.transform = `translateX(${-index * 220}px)`;
    }
  
    function updateVisibility() {
      cards.forEach((card, index) => {
        card.style.opacity = index === currentIndex ? 1 : 0.5;
      });
    }
  
    prevBtn.addEventListener('click', function () {
      currentIndex = Math.max(currentIndex - 1, 0);
      showCard(currentIndex);
      updateVisibility();
    });
  
    nextBtn.addEventListener('click', function () {
      currentIndex = Math.min(currentIndex + 1, cards.length - 1);
      showCard(currentIndex);
      updateVisibility();
    });
  });
  