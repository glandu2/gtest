#ifdef _MSC_VER
#    pragma warning(disable: 4251) /* class 'A' needs to have dll interface for to be used by clients of class 'B'. dll and users must use same crt dll and compiler flags. */
#    pragma warning(disable: 4275) /* nonstandard extension used : zero-sized array in struct/union */
#endif

#ifdef __GNUC__
#    pragma GCC diagnostic ignored "-Wsign-compare"
#endif
