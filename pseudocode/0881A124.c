/* Entry 0x0881A124 | file offset 0x000170FC | FUN_0881a124 | bytes 168 */

undefined4 FUN_0881a124(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = DAT_089d5ec0 + 0x8b0;
    if (iVar2 == 0) {
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = FUN_08899300();
      FUN_08898464(uVar1,((*param_1 & 0x1fffe) >> 1 ^ 0x8000) - 0x8000,iVar2);
      *param_1 = *param_1 | 0x60000;
      param_1[1] = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}

