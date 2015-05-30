static const uint8_t vs_tonemap_glsl[1313] =
{
	0x56, 0x53, 0x48, 0x04, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, // wTexel.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, // odelViewProj....
	0x01, 0x00, 0xea, 0x04, 0x00, 0x00, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, // ......attribute 
	0x76, 0x65, 0x63, 0x33, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, // vec3 a_position;
	0x0a, 0x61, 0x74, 0x74, 0x72, 0x69, 0x62, 0x75, 0x74, 0x65, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, // .attribute vec2 
	0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, // a_texcoord0;.var
	0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ying vec2 v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, // oord0;.varying v
	0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x3b, // ec4 v_texcoord1;
	0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, // .varying vec4 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, // texcoord2;.varyi
	0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // ng vec4 v_texcoo
	0x72, 0x64, 0x33, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x76, 0x65, 0x63, // rd3;.varying vec
	0x34, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, 0x3b, 0x0a, 0x75, // 4 v_texcoord4;.u
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x76, 0x69, // niform vec4 u_vi
	0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // ewTexel;.uniform
	0x20, 0x6d, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, //  mat4 u_modelVie
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, // wProj;.void main
	0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, //  ().{.  float tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // pvar_1;.  tmpvar
	0x5f, 0x31, 0x20, 0x3d, 0x20, 0x28, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, // _1 = (u_viewTexe
	0x6c, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x36, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, // l.x * 6.0);.  ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_2;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x61, 0x5f, 0x70, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x3b, 0x0a, 0x20, 0x20, // = a_position;.  
	0x67, 0x6c, 0x5f, 0x50, 0x6f, 0x73, 0x69, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x3d, 0x20, 0x28, 0x75, // gl_Position = (u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x20, 0x2a, // _modelViewProj *
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, //  tmpvar_2);.  v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, // texcoord0 = a_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, // xcoord0;.  vec4 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // tmpvar_3;.  tmpv
	0x61, 0x72, 0x5f, 0x33, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // ar_3.x = (a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // oord0.x - tmpvar
	0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, // _1);.  tmpvar_3.
	0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // y = a_texcoord0.
	0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x7a, 0x20, // y;.  tmpvar_3.z 
	0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, // = (a_texcoord0.x
	0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  + tmpvar_1);.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, // tmpvar_3.w = a_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, // excoord0.y;.  v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // texcoord1 = tmpv
	0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, // ar_3;.  vec4 tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_4;.  tmpvar_
	0x34, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // 4.x = (a_texcoor
	0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, // d0.x - (tmpvar_1
	0x20, 0x2a, 0x20, 0x32, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, //  * 2.0));.  tmpv
	0x61, 0x72, 0x5f, 0x34, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // ar_4.y = a_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ord0.y;.  tmpvar
	0x5f, 0x34, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // _4.z = (a_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // rd0.x + (tmpvar_
	0x31, 0x20, 0x2a, 0x20, 0x32, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // 1 * 2.0));.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, // var_4.w = a_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, // oord0.y;.  v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // coord2 = tmpvar_
	0x34, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 4;.  vec4 tmpvar
	0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, 0x78, // _5;.  tmpvar_5.x
	0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, //  = (a_texcoord0.
	0x78, 0x20, 0x2d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, // x - (tmpvar_1 * 
	0x33, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // 3.0));.  tmpvar_
	0x35, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, // 5.y = a_texcoord
	0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2e, // 0.y;.  tmpvar_5.
	0x7a, 0x20, 0x3d, 0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // z = (a_texcoord0
	0x2e, 0x78, 0x20, 0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, // .x + (tmpvar_1 *
	0x20, 0x33, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  3.0));.  tmpvar
	0x5f, 0x35, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // _5.w = a_texcoor
	0x64, 0x30, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, // d0.y;.  v_texcoo
	0x72, 0x64, 0x33, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, // rd3 = tmpvar_5;.
	0x20, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, //   vec4 tmpvar_6;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x78, 0x20, 0x3d, 0x20, // .  tmpvar_6.x = 
	0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2d, // (a_texcoord0.x -
	0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, //  (tmpvar_1 * 4.0
	0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x79, // ));.  tmpvar_6.y
	0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, //  = a_texcoord0.y
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, 0x7a, 0x20, 0x3d, // ;.  tmpvar_6.z =
	0x20, 0x28, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, //  (a_texcoord0.x 
	0x2b, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x34, 0x2e, // + (tmpvar_1 * 4.
	0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x2e, // 0));.  tmpvar_6.
	0x77, 0x20, 0x3d, 0x20, 0x61, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // w = a_texcoord0.
	0x79, 0x3b, 0x0a, 0x20, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x34, // y;.  v_texcoord4
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, //  = tmpvar_6;.}..
	0x00,                                                                                           // .
};
static const uint8_t vs_tonemap_dx9[657] =
{
	0x56, 0x53, 0x48, 0x04, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0f, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // VSH........u_mod
	0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x01, 0x00, 0x00, 0x04, 0x00, // elViewProj......
	0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x02, 0x01, 0x04, 0x00, // .u_viewTexel....
	0x01, 0x00, 0x5c, 0x02, 0x00, 0x03, 0xfe, 0xff, 0xfe, 0xff, 0x30, 0x00, 0x43, 0x54, 0x41, 0x42, // ..........0.CTAB
	0x1c, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x00, 0x03, 0xfe, 0xff, 0x02, 0x00, 0x00, 0x00, // ................
	0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, // ............D...
	0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x54, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........T.......
	0x64, 0x00, 0x00, 0x00, 0x02, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, // d...........p...
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, // ....u_modelViewP
	0x72, 0x6f, 0x6a, 0x00, 0x03, 0x00, 0x03, 0x00, 0x04, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, // roj.............
	0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x00, // ....u_viewTexel.
	0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x76, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, // vs_3_0.Microsoft
	0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, //  (R) HLSL Shader
	0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, 0x33, 0x30, 0x2e, 0x39, //  Compiler 9.30.9
	0x32, 0x30, 0x30, 0x2e, 0x31, 0x36, 0x33, 0x38, 0x34, 0x00, 0xab, 0xab, 0x51, 0x00, 0x00, 0x05, // 200.16384...Q...
	0x05, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, 0x00, 0x00, 0x90, 0x41, // .......@..@A...A
	0x00, 0x00, 0xc0, 0x41, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, // ...A............
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x03, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0x80, 0x02, 0x00, 0x0f, 0xe0, // ................
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x02, 0x80, 0x03, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, // ................
	0x05, 0x00, 0x03, 0x80, 0x04, 0x00, 0x0f, 0xe0, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x04, 0x80, // ................
	0x05, 0x00, 0x0f, 0xe0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0xa0, // ................
	0x00, 0x00, 0x55, 0x90, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0xa0, // ..U.............
	0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, // ................
	0x02, 0x00, 0xe4, 0xa0, 0x00, 0x00, 0xaa, 0x90, 0x00, 0x00, 0xe4, 0x80, 0x02, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0xe4, 0x80, 0x03, 0x00, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, // ................
	0x01, 0x00, 0x03, 0xe0, 0x01, 0x00, 0xe4, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, // ................
	0x04, 0x00, 0x00, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x01, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x05, 0x00, 0xe4, 0xa1, 0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0xe0, // ................
	0x01, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, // ..............U.
	0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0xe4, 0xa0, // ................
	0x01, 0x00, 0x00, 0x90, 0x01, 0x00, 0x00, 0x02, 0x02, 0x00, 0x04, 0xe0, 0x00, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x00, 0x02, 0x03, 0x00, 0x01, 0xe0, 0x01, 0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0x02, // ..........U.....
	0x03, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0x02, 0x03, 0x00, 0x04, 0xe0, // ......U.........
	0x00, 0x00, 0x55, 0x80, 0x01, 0x00, 0x00, 0x02, 0x04, 0x00, 0x01, 0xe0, 0x01, 0x00, 0xaa, 0x80, // ..U.............
	0x01, 0x00, 0x00, 0x02, 0x05, 0x00, 0x01, 0xe0, 0x01, 0x00, 0xff, 0x80, 0x01, 0x00, 0x00, 0x02, // ................
	0x04, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0x02, 0x04, 0x00, 0x04, 0xe0, // ......U.........
	0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0x00, 0x02, 0x05, 0x00, 0x04, 0xe0, 0x00, 0x00, 0xff, 0x80, // ................
	0x01, 0x00, 0x00, 0x02, 0x05, 0x00, 0x0a, 0xe0, 0x01, 0x00, 0x55, 0x90, 0xff, 0xff, 0x00, 0x00, // ..........U.....
	0x00,                                                                                           // .
};
static const uint8_t vs_tonemap_dx11[1028] =
{
	0x56, 0x53, 0x48, 0x04, 0xdb, 0xe3, 0xfb, 0xec, 0x02, 0x00, 0x0b, 0x75, 0x5f, 0x76, 0x69, 0x65, // VSH........u_vie
	0x77, 0x54, 0x65, 0x78, 0x65, 0x6c, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0f, 0x75, 0x5f, 0x6d, // wTexel.......u_m
	0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x04, 0x00, 0x10, 0x00, // odelViewProj....
	0x04, 0x00, 0xc8, 0x03, 0x44, 0x58, 0x42, 0x43, 0xe1, 0x37, 0x6b, 0xa7, 0x66, 0x6e, 0xb6, 0x72, // ....DXBC.7k.fn.r
	0x12, 0xc2, 0x33, 0x55, 0xf5, 0x10, 0xcd, 0xd9, 0x01, 0x00, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00, // ..3U............
	0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x38, 0x01, 0x00, 0x00, // ....,.......8...
	0x49, 0x53, 0x47, 0x4e, 0x4c, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, // ISGNL...........
	0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // 8...............
	0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........A.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, // ................
	0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, // POSITION.TEXCOOR
	0x44, 0x00, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0xb0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, // D...OSGN........
	0x08, 0x00, 0x00, 0x00, 0x98, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x03, 0x0c, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xa4, 0x00, 0x00, 0x00, // ................
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, // ....SV_POSITION.
	0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, // TEXCOORD....SHDR
	0x88, 0x02, 0x00, 0x00, 0x40, 0x00, 0x01, 0x00, 0xa2, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x04, // ....@.......Y...
	0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, // F. ........._...
	0x72, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, // r......._...2...
	0x01, 0x00, 0x00, 0x00, 0x67, 0x00, 0x00, 0x04, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....g.... ......
	0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0x32, 0x20, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ....e...2 ......
	0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, // e.... ......e...
	0xf2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, // . ......e.... ..
	0x04, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x08, 0xf2, 0x00, 0x10, 0x00, // h.......8.......
	0x00, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....V.......F. .
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, // ........2.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // ....F. .........
	0x06, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........F.......
	0x32, 0x00, 0x00, 0x0a, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // 2...........F. .
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xa6, 0x1a, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0xf2, 0x20, 0x10, 0x00, // F............ ..
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x8e, 0x20, 0x00, // ....F.......F. .
	0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x32, 0x20, 0x10, 0x00, // ........6...2 ..
	0x01, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ....F.......6...
	0xa2, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // . ......V.......
	0x32, 0x00, 0x00, 0x0e, 0xf2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x80, // 2............. .
	0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, // A............@..
	0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, 0x00, 0x00, 0x90, 0x41, 0x00, 0x00, 0xc0, 0x41, // ...@..@A...A...A
	0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, // ........6.... ..
	0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0d, // ............2...
	0xf2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // .......... .....
	0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x00, 0x00, 0x40, 0x41, // .....@.....@..@A
	0x00, 0x00, 0x90, 0x41, 0x00, 0x00, 0xc0, 0x41, 0x06, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ...A...A........
	0x36, 0x00, 0x00, 0x05, 0x42, 0x20, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // 6...B ..........
	0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, // ....6.... ......
	0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, // V.......6.... ..
	0x03, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ............6...
	0x42, 0x20, 0x10, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // B ..............
	0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, // 6.... ......*...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x12, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....6.... ......
	0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x42, 0x20, 0x10, 0x00, // :.......6...B ..
	0x04, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, // ....*.......6...
	0x42, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // B ......:.......
	0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x04, 0x00, 0x00, 0x00, 0x56, 0x15, 0x10, 0x00, // 6.... ......V...
	0x01, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0xa2, 0x20, 0x10, 0x00, 0x05, 0x00, 0x00, 0x00, // ....6.... ......
	0x56, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x02, 0x01, 0x00, // V.......>.......
	0x10, 0x00, 0x50, 0x00,                                                                         // ..P.
};
