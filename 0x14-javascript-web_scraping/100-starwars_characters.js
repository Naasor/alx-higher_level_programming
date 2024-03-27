#!/usr/bin/node
const request = require('request');
const epId = process.argv[2];
const apiUrl = 'https://swapi.co/api/films/' + ${epId};
request(url, function (error, response, body) {
  if (!error) {
    const characters = JSON.parse(body).characters;
    characters.forEach((character) => {
      request(character, function (error, response, body) {
        if (!error) {
          console.log(JSON.parse(body).name);
        }
      });
    });
  }
});
