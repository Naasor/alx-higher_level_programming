# 0x10. Python - Network #0
The goal of this project was to get us acquainted with how HTTP worked, what domains and subdomains were, what query strings were, what a URL is, what HTTP requests and responses look like, and how HTTP cookies work.

# Tasks
[0-body_size.sh](0-body_size.sh) - the script takes in a URL, sends a request to it, and returns the size of the response body in bytes using `curl`
```
$ ./0-body_size.sh 0.0.0.0:5000
10
```

[1-body.sh](1-body.sh) - the script takes a URL, sends a `GET` request, and displays the body of `200` status code responses
```
$ ./1-body.sh 0.0.0.0:5000/route_1 ; echo ""
Route 2
```

[2-delete.sh](2-delete.sh) - the script sends a `DELETE` request to a URL and displays the body of the response
```
$ ./2-delete.sh 0.0.0.0:5000/route_3 ; echo ""
I'm a DELETE request
```

[3-methods.sh](3-methods.sh) - the script displays all HTTP methods that the server will accept
```
$ ./3-methods.sh 0.0.0.0:5000/route_4
OPTIONS, HEAD, PUT
```

[4-header.sh](4-header.sh) - script takes in a URL, sends a `GET` request with the header variable `X-School-User-Id` sent with the value `98`
```
$ ./4-header.sh 0.0.0.0:5000/route_5 ; echo ""
Hello School!
```

[5-post_params.sh](5-post_params.sh) - script takes a URL, sends a `POST` request, and sends `email` variable with the value `test@gmail.com` and `subject` with the value `I will always be here for PLD`.
```
$ ./5-post_params.sh 0.0.0.0:5000/route_6 ; echo ""
POST params:
    email: test@gmail.com
    subject: I will always be here for PLD
```

[6-peak.py](6-peak.py) - Python script that finds a peak in a list of unordered integers
```
$ ./6-main.py
6
3
2
None
2
4

$ wc -l 6-peak.txt
2 6-peak.txt
```
[6-peak.txt](6-peak.txt) - the time complexity of `6-peak.py`

[100-status_code.sh](100-status_code.sh) - script sends a request to a URL and displays only the status code of the response
```
$ ./100-status_code.sh 0.0.0.0:5000 ; echo ""
200

$ ./100-status_code.sh 0.0.0.0:5000/nop ; echo ""
404
```

[101-post_json.sh](101-post_json.sh) - script sends a JSON `POST` request to a URL and displays the response
```
$ ./101-post_json.sh 0.0.0.0:5000/route_json my_json_2 ; echo ""
Not a valid JSON
```

[102-catch_me.sh](102-catch_me.sh) - script sends a request to `0.0.0.0:5000/catch_me` that causes the server to respond with a message `You got me!`
```
$ ./102-catch_me.sh ; echo ""
You got me!
```



## Author :octocat:

[Esteban De La Hoz](https://www.linkedin.com/in/esteban-de-la-hoz-romero-b6270017b/) | [Twitter](https://twitter.com/Esteban18911) | [GitHub](https://github.com/Esteban18911)
