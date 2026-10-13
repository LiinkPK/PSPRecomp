/* Entry 0x089A5674 | file offset 0x001A264C | FUN_089a5674 | bytes 276 */

uint FUN_089a5674(char *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int local_20;
  int local_1c [3];
  
  uVar3 = 0x800001fe;
  if ((param_1 != (char *)0x0) && (uVar3 = 0x800001fe, *param_1 != '\0')) {
    uVar1 = sceIoDevctl("fatms0:",0x2425823,0,0,&local_20,4);
    if (-1 < (int)uVar1) {
      uVar1 = (uint)(local_20 == 1);
    }
    uVar3 = 0x80020321;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    if ((uVar1 == 1) && (uVar3 = sceKernelPowerLock(0), uVar3 == 0)) {
      uVar3 = FUN_089a5788(param_1);
      sceKernelPowerUnlock(0);
      if (uVar3 == 0x8001000d) {
        iVar2 = sceIoDevctl(&DAT_089d0990,0x2425824,0,0,local_1c,4);
        if (iVar2 < 0) {
          local_1c[0] = iVar2;
        }
        if (local_1c[0] == 1) {
          uVar3 = 0xffffffff;
        }
      }
    }
  }
  return uVar3;
}

