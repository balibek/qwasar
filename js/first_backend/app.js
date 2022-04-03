const express = require('express')
const app = express()
const port = 8080

const basicAuth = require('express-basic-auth')

// Part 1
app.get('/', (req, res) => {
    const list = ["All of You", "All Alone", "All the Way Home", "All This and Heaven Too",
                 "All Through the Day", "Almost Like Being in Love", "Always", "America the Beautiful", "Anything",
                "American Beauty Rose", "Angel Eyes", "Any Time at All", "Available", "Ave Maria","Barbara", "Blue",
                 "Black", "Blue Moon","The Boys Night Out","Brown"];
    res.send(`${ list [Math.floor(Math.random() * 20)]}`) 
})

//Part 2

app.get('/birth_date', (req, res) => {
  res.send('December 12, 1915')
})

app.get('/birth_city', (req, res) => {
  res.send('Hoboken, New Jersey')
})

app.get('/wives', (req, res) => {
  res.send('Nancy Barbato, Ava Gardner, Mia Farrow, Barbara Marx ')
})

app.get (`/picture`, (req, res) => {
    res.sendFile("/home/docode/project/Frank_Sinatra_'57.jpg")
})

// Part 3
app.use(basicAuth({
    users: { 'admin': 'admin' },
    challenge: true,
    unauthorizedResponse: (req) => {
        return '401 Not authorized\n';ed
    }
}))

app.get('/public', (req, res) => {
  res.send("Everybody can see this page")
})

app.get (`/protected`, (req, res) => {
    res.send("Welcome, authenticated client")
})


app.listen(port, () => {
  console.log(`Example app listening at http://web-v8552ab48-061a.docode.qwasar.io`)
})