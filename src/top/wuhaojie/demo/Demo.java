package top.wuhaojie.demo;

public class Demo {
	static {
		System.loadLibrary("CDemo");
	}

	public static native String getString(String text);

	public static void main(String[] args) {
		String s = getString("Hello World!\n");
		System.out.println(s);
	}
}
