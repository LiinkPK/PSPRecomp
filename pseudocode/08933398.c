/* Entry 0x08933398 | file offset 0x00130370 | FUN_08933398 | bytes 140 */

undefined4 FUN_08933398(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_08993244();
  uVar1 = sceKernelCreateCallback(&DAT_089cf494,FUN_08933378,0);
  sceKernelRegisterExitCallback(uVar1);
  sceKernelChangeCurrentThreadAttr(0,0x4000);
  FUN_088769cc();
  uVar1 = DAT_089d85bc;
  FUN_0893354c(DAT_089d85bc);
  do {
    iVar2 = FUN_08933458(uVar1);
  } while (iVar2 != 0);
  FUN_0893347c(uVar1);
  return 0;
}

