/* Entry 0x0899FBE4 | file offset 0x0019CBBC | FUN_0899fbe4 | bytes 200 */

undefined4 FUN_0899fbe4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_09af6d20 != (code *)0x0) {
    (*DAT_09af6d20)();
  }
  uVar2 = DAT_09af6818;
  iVar1 = DAT_09af6814;
  DAT_09af6818 = DAT_09af6814;
  DAT_09af6814 = uVar2;
  if (DAT_09af67f0 == 1) {
    sceDisplaySetFrameBuf(DAT_09af67fc + iVar1,DAT_09af6810,DAT_09af680c,0);
  }
  if (DAT_09af6d24 != (code *)0x0) {
    (*DAT_09af6d24)();
  }
  if (DAT_09af6d2c != (code *)0x0) {
    (*DAT_09af6d2c)(DAT_09af680c,DAT_09af6814,DAT_09af6810);
  }
  return DAT_09af6814;
}

