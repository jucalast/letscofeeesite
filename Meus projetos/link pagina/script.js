// Código JavaScript para adicionar produtos dinamicamente

window.addEventListener('DOMContentLoaded', function() {
    var productList = document.getElementById('product-list');
  
    // Array com os produtos
    var products = [
      'Produto 1',
      'Produto 2',
      'Produto 3',
      'Produto 4'
    ];
  
    // Adiciona os produtos à lista
    products.forEach(function(product) {
      var li = document.createElement('li');
      li.textContent = product;
      productList.appendChild(li);
    });
  });
  