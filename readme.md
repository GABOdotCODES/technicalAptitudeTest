# Technical aptitude test

This is a simple technical test.

## I enjoyed this

I was developing a C++ Addon to Node JS, some topics in this test were unknown to me but I like challenges and here we are with other challenge completed.

## To see in action

- [Click me!](https://technicaltestfreedomcenter.herokuapp.com/)

## To install

- Just clone this repo
- Create a `.envrc` file in project root with:

```
  export PORT=3000
```

```
  export HELP_URL=https://github.com/GABOdotCODES/technicalAptitudeTest
```

(I added `HELP_URL` just to show env vars skill)

- Execute `npm i -g node-gyp`
- node-gyp is a cross-platform command-line tool written in Node.js for compiling native addon modules for Node.js) [more info...](https://github.com/nodejs/node-gyp)
- Wait... ¿What's an Addon?
  Addons are dynamically-linked shared objects written in C++. The require() function can load Addons as ordinary Node.js modules. Addons provide an interface between JavaScript and C/C++ libraries. [more info...](https://nodejs.org/api/addons.html#addons_c_addons)
- ¿Does that mean...? Yes, you're right, run C++ code inside NodeJs 🤯 Imagine that performance in a web service 🚀
- Ok! Let's continue
  Execute `npm start`
- You finish!
  Now, you've a piece of C++ running in <http://localhost:3000/>
