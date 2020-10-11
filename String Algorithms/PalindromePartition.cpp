vector<vector<string> > res;
bool ispali(string s){
int i=0,j=s.size()-1;
while(i<=j){
if(s[i]!=s[j]){
return false;
}
i++;
j--;
}
return true;
}
void solve(string str,vector<string> str1,int i,string ap){
// cout<<"i is “<<i<<endl;
if(ap.size()){
// if(str1.size())
// str1.push_back(” ");
str1.push_back(ap);
}
int p;
if(i==str.size()){
res.push_back(str1);
// res.at(k++)->push_back(str1);
return;
}
for(int j=1;j<=str.size();j++){
if((i+j)<=str.size()){
string ap=str.substr(i,j);
// cout<<"ap is "<<ap<<endl;
if(ispali(ap)){
// cout<<"selected is "<<ap<<endl;
// ap+=’ ';
solve(str,str1,i+j,ap);
}
}
}
}
vector<vector<string> > Solution::partition(string str) {
vector<string> str1;
string s;
// cout<<“ddwd#”;
res.clear();
solve(str,str1,0,s);
return res;
}
