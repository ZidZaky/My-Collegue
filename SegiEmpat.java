import java.util.ArrayList;
class DriverBangunRuang{
	public static void main(String[] args){
		ArrayList<SegiEmpat> ase = new ArrayList<SegiEmpat>();
		ase.add(new SegiEmpat(4,5));
		ase.add(new Balok(4,5,6));
		ase.add(new Persegi(10));
		ase.add(new Balok(2,3,4));

		System.out.println("\n\nVia Foreach");
		for (SegiEmpat obj : ase){
			System.out.println("Luas Object: "+ obj.hitungLuas());
		}


		System.out.println("\n\nVia For");
		for (int a=0; a<ase.size(); a++){
			System.out.println("Luas Object: "+ ase.get(a).hitungLuas());
		}

		System.out.println("\n\nVia Vallen");

		/*
		System.out.println("Luas Object: "+ ase.get(0).hitungLuas());
		System.out.println("Luas Object: "+ ase.get(1).hitungLuas());
		System.out.println("Luas Object: "+ ase.get(2).hitungLuas());
		System.out.println("Luas Object: "+ ase.get(3).hitungLuas());
		*/
	}
}
class SegiEmpat{
	int p;
	int l;

	public SegiEmpat(int p, int l){
		this.p = p;
		this.l = l;
	}

	public void setPanjang(int p){
		this.p = p;		
	}
	public void setLebar(int l){
		this.l = l;		
	}
	public int getPanjang(){
		return p;		
	}
	public int getLebar(){
		return l;		
	}
	public int hitungLuas(){
		return p * l;
	}

	public int volume(){	
		if (this instanceof Persegi){
			System.out.println("Not Applied");
		}
		if (this instanceof SegiEmpat){
			System.out.println("Not Applied");
		}
		return 0;
	}
}
class Persegi extends SegiEmpat{
	public Persegi(int s){
		super(s, s);
	}
}

class Balok extends SegiEmpat{
	int t;
	public Balok(int p, int l, int t){
		super(p,l);
		this.t = t;
	}

	public void setTinggi(int t){
		this.t = t;		
	}
	public int getTinggi(){
		return t;		
	}

	//Override
	public int hitungLuas(){
		return (2*(p * l))+ (2*(p * t))+ (2*(l * t));
	}

	//Override
	public int volume(){
		return p * l * t;
	}


}