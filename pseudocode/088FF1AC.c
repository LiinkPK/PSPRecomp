/* Entry 0x088FF1AC | file offset 0x000FC184 | FUN_088ff1ac | bytes 68 */

undefined4 FUN_088ff1ac(undefined1 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_089d8120;
  if (DAT_089d8120 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_088fec98(DAT_089d8120,param_1);
    *(undefined4 *)(iVar1 + 0x1c8) = 0;
  }
  return uVar2;
}

