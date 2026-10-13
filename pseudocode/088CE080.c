/* Entry 0x088CE080 | file offset 0x000CB058 | FUN_088ce080 | bytes 64 */

undefined4 FUN_088ce080(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088ce2a0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 8) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

