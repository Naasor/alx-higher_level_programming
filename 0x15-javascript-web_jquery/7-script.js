$(document).ready(function getCharacter () {
  $.get('https://swapi.co/api/people/5/?format=json', function apiName (data) {
    $('DIV#character').text(data.name);
  });
});
