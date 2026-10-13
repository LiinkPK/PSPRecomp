/* Entry 0x088DF7EC | file offset 0x000DC7C4 | FUN_088df7ec | bytes 56 */

undefined4 FUN_088df7ec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088df7e4();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 8);
  }
  return uVar2;
}

