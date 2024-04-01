package handlers

import (
	"github.com/go-chi/chi"
	chimiddle "github.com/go-chi/chi/middleware"
	"golangapi/internal/middleware"
)

func Handler(r *chi.Mux){
	//Global middleware
	r.Use(chimiddle.StripSlashes)

	r.Route("/account", func(router chi.router){

		//Middleware for /account route
		router.Use(middleware.Authorization)
		
		router.Get("/coins",GetCoinBalnce)
	})
}