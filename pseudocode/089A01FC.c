/* Entry 0x089A01FC | file offset 0x0019D1D4 | FUN_089a01fc | bytes 112 */

undefined4 FUN_089a01fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
    uVar1 = 0;
  }
  else {
    iVar2 = DAT_09af67fc + DAT_09af6818;
    uVar1 = DAT_09af6810;
  }
  sceDisplaySetFrameBuf(iVar2,uVar1,DAT_09af680c,1);
  uVar1 = DAT_09af67f0;
  DAT_09af67f0 = param_1;
  return uVar1;
}

