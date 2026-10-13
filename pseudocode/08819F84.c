/* Entry 0x08819F84 | file offset 0x00016F5C | FUN_08819f84 | bytes 352 */

undefined4 FUN_08819f84(uint *param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined1 auStack_20 [12];
  
  if ((*param_1 & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if ((*param_1 & 0x60000) == 0) {
      fVar3 = (float)param_1[1] + DAT_089d5eac;
      param_1[1] = (uint)fVar3;
      if (fVar3 < 30.0) {
        iVar2 = DAT_089d5ec0 + 0x8b0;
        if (iVar2 == 0) {
          return 0xfffffffe;
        }
        FUN_08864c1c(auStack_20);
        fVar3 = (float)FUN_08864cb8(iVar2);
        FUN_08864c74((fVar3 * (float)param_1[1]) / 30.0,auStack_20);
        fVar3 = (float)FUN_08864cc0(iVar2);
        FUN_08864c7c((fVar3 * (float)param_1[1]) / 30.0,auStack_20);
        FUN_08864c84(auStack_20,0xff,0xff,0xff);
        uVar1 = FUN_08899300();
        FUN_08898464(uVar1,((*param_1 & 0x1fffe) >> 1 ^ 0x8000) - 0x8000,auStack_20);
        FUN_08864c48(auStack_20,2);
      }
      else {
        FUN_0881a124(param_1);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

