package api

import (
	"encoding/json"
	"net/http"
)

//Coin Balance Params
type CoinBalanceParams struct{
	Username string
}

type CoinBalanceResponse struct{
	//Success code, usually 200
	Code int

	//Account Balance
	Balance int64
}

type Error struct{
	//Error code
	Code int

	//Error message
	Message string
}

func writeError(w http.ResponseWriter, message string, code int){
	resp := Error{code, message}

	w.Header().Set("Content-Type","application/json")
	w.WriteHeader(code)

	json.NewEncoder(w).Encode(resp)

}

var (
	RequestErrorHandler = func(w http.ResponseWriter, err error){
		writeError(w,err.Error(),http.StatusBadRequest)
	}
	InternalErrorHandler = func(w httpResponseWriter){
		writeError(w,"An Unexpected Error Occurred.",http.StatusInternalServerError)
	}
)