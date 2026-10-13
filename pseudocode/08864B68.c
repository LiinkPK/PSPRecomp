/* Entry 0x08864B68 | file offset 0x00061B40 | FUN_08864b68 | bytes 152 */

void FUN_08864b68(undefined4 param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = sceUmdGetDriveStat();
  if ((uVar1 & 0x20) == 0) {
    uVar2 = 0;
    if ((param_2 & 0x80) == 0) {
      uVar2 = 1;
    }
    else if (DAT_089d69dc != '\0') {
      FUN_0888337c(1);
    }
    while (uVar1 = sceUmdGetDriveStat(), (uVar1 & 0x20) == 0) {
      FUN_08883f9c(DAT_089d69e0,uVar2,1);
    }
  }
  return;
}

