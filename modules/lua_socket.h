int cs_ls_connect(lua_State *L);
int cs_ls_closesocket(lua_State *L);
int cs_ls_recv(lua_State *L);
int cs_ls_send(lua_State *L);
int cs_ls_accept(lua_State *L);
int cs_ls_bind(lua_State *L);
int cs_ls_bind2conn(lua_State *L);
int cs_ls_bind2bind(lua_State *L);
int cs_ls_conn2conn(lua_State *L);


void bind2conn(int port1, char *host, int port2);
void bind2bind(int port1, int port2);
void conn2conn(char *host1,int port1,char *host2,int port2);