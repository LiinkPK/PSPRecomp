/* Entry 0x089A5490 | file offset 0x001A2468 | FUN_089a5490 | bytes 484 */

uint FUN_089a5490(uint *param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_40 [8];
  int local_20;
  uint *local_1c [3];
  
  uVar2 = sceIoDevctl("fatms0:",0x2425823,0,0,&local_20,4);
  if (-1 < (int)uVar2) {
    uVar2 = (uint)(local_20 == 1);
  }
  if (uVar2 == 1) {
    local_1c[0] = local_40;
    uVar2 = sceIoDevctl(&DAT_089d0990,0x2425818,local_1c,4,0,0);
    if (uVar2 == 0) {
      uVar5 = local_1c[0][4] * local_1c[0][3];
      lVar1 = (ulonglong)*local_1c[0] * (ulonglong)uVar5;
      iVar3 = *local_1c[0] * ((int)uVar5 >> 0x1f) + (int)((ulonglong)lVar1 >> 0x20);
      if (param_1 != (uint *)0x0) {
        uVar6 = (uint)(iVar3 >> 0x1f) >> 0x16;
        uVar4 = (int)lVar1 + uVar6;
        iVar3 = iVar3 + (uint)(uVar4 < uVar6);
        *param_1 = uVar4 >> 10 | iVar3 * 0x400000;
        param_1[1] = iVar3 >> 10;
      }
      if (local_1c[0][1] < 3) {
        iVar3 = 0;
        uVar4 = 0;
      }
      else {
        uVar4 = local_1c[0][1] - 2;
        iVar3 = (uVar4 < 0xfffffffe) - 1;
      }
      iVar3 = uVar4 * ((int)uVar5 >> 0x1f) + (int)((ulonglong)uVar4 * (ulonglong)uVar5 >> 0x20) +
              uVar5 * iVar3;
      if (param_2 != (uint *)0x0) {
        uVar6 = (uint)(iVar3 >> 0x1f) >> 0x16;
        uVar5 = (int)((ulonglong)uVar4 * (ulonglong)uVar5) + uVar6;
        iVar3 = iVar3 + (uint)(uVar5 < uVar6);
        *param_2 = uVar5 >> 10 | iVar3 * 0x400000;
        param_2[1] = iVar3 >> 10;
      }
    }
  }
  else if (uVar2 == 0) {
    uVar2 = 0x80020321;
  }
  return uVar2;
}

