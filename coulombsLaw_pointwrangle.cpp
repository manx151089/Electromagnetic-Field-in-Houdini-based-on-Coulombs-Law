float ke=(9.0*exp(10*1));
vector q1,q2;
q1=v@P-point(1,"P",0);
q2=point(2,"P",0)-v@P;
float r=length(q1-q2);

vector f=ke*(q1*q2)/(r*r);

vector e=1;
v@N=normalize(f);
v@up=cross(v@N,{0,1,0});
matrix3 m = maketransform(@N,@up);
@orient = quaternion(m);
