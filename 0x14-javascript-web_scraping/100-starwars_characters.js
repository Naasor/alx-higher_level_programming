#!/usr/bin/node
const req = require('request')
const id = process.argv[2]
const url = `https://swapi-api.hbtn.io/api/films/${id}`

req.get(url, (error, res, body) => {
  if (error) {
    console.log(error)
  } else {
  const data = JSON.parse(body);
  const dd = data.characters;
  for (const i of dd) {
    req.get(i, (error, res, body1) => {
      if (error) {
        console.log(error)
      } else {
      const data1 = JSON.parse(body1)
      console.log(data1.name)
      }
    });
  }
  }
})
