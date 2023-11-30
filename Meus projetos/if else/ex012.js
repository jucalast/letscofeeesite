var agora = new Date()
var hora = agora.getHours()
document.write (`Agora são exatamente ${hora} horas.`)
if (hora <= 12 && hora > 6){
    document.write('Bom-dia!')
} else if (hora <= 18 && hora > 12){
    document.write ('Boa-tarde!')
} else if (hora > 19 && hora <=24){
    document.write('Boa-noite!')
} else if (hora > 1 && hora <6){
    document.write ('Boa-madrugada')
}