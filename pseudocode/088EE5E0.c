/* Entry 0x088EE5E0 | file offset 0x000EB5B8 | FUN_088ee5e0 | bytes 168 */

undefined4 FUN_088ee5e0(uint param_1)

{
  uint uVar1;
  int local_10;
  
  param_1 = param_1 & 0xf;
  if (param_1 != 0) {
    if (param_1 == 1) {
      uVar1 = sceUmdGetDriveStat();
      if ((uVar1 & 0x20) == 0) {
        return 0;
      }
    }
    else if (param_1 == 2) {
      uVar1 = sceIoDevctl("fatms0:",0x2425823,0,0,&local_10,4);
      if (-1 < (int)uVar1) {
        uVar1 = (uint)(local_10 == 1);
      }
      if (uVar1 == 0) {
        return 0;
      }
    }
  }
  return 1;
}

