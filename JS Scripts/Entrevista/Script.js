function enviarDados() {
    var nome = document.getElementById("nome_input").value;
    var nota = document.getElementById("nota_input").value;
  
    document.getElementById("nome_celula").innerText = nome;
    document.getElementById("nota_celula").innerText = nota;
  
    if (nota > 6) {
      document.getElementById("passou_celula").innerText = "Passou";
    } else {
      document.getElementById("passou_celula").innerText = "Não passou";
    }
}  