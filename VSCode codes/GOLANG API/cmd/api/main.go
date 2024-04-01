package main

import(
	"fmt"
	"net/http"

	"github.com/go-chi/chi"
	"golangapi/internal/handlers"
	log "github.com/sirupsen/logrus"
)

func main(){

	//for line numbers
	log.SetReportCaller(true)

	var r *chi.Mux = chi.NewRouter()
	handlers.Handler(r)

	fmt.Println("Starting GOAPI service...")

	fmt.Println(`
	AHHAHAHAHHHAHHAHAHAHAHHAHAH
	HAHAHHAHHAHAHHAHAHHAAHHAHAHA
	HAHHAHAHHAHAHAHAHHAHAHAHAHAHA
	AHHAHAHHAHAHHAHAHAHHA
	`)

	err := http.ListenAndServe("localhost:8000",r)

	if err != nil {
		log.Error(err)
	}

}