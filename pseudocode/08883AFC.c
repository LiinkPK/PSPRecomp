/* Entry 0x08883AFC | file offset 0x00080AD4 | FUN_08883afc | bytes 396 */

void FUN_08883afc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar1 = DAT_089d5ff0;
  DAT_089d69de = 0;
  if ((DAT_089d69df == '\0') && (DAT_089d69dc != '\0')) {
    FUN_08935524(*(int *)(param_2 + 0x50) + *(int *)(param_2 + 0x58),DAT_089d69d8,param_1);
    param_1 = *(int *)(param_2 + 0x58) + param_1;
    *(int *)(param_2 + 0x58) = param_1;
    if (param_1 == *(int *)(param_2 + 0x54)) {
      if (DAT_09b49134 == 0) {
        DAT_09b49130 = param_2;
        DAT_09b49134 = param_2;
        *(undefined4 *)(param_2 + 0x70) = 0;
      }
      else {
        *(int *)(DAT_09b49134 + 0x70) = param_2;
        *(undefined4 *)(param_2 + 0x70) = 0;
        DAT_09b49134 = param_2;
      }
      DAT_089d69d4 = 0;
      if (*(int *)(param_2 + 0x5c) != 0) {
        local_30 = *(undefined4 *)(param_2 + 0x50);
        local_2c = *(undefined4 *)(param_2 + 0x54);
        (**(code **)(param_2 + 0x5c))(&local_30,*(undefined4 *)(param_2 + 0x60));
      }
      if (DAT_09b49128 == 0) {
        DAT_089d69dd = 0;
      }
    }
    else {
      DAT_089d69de = 1;
      iVar2 = *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x58);
      iVar3 = 0x4000;
      if (iVar2 < 0x4000) {
        iVar3 = iVar2;
      }
      FUN_08871818(uVar1,param_2,DAT_089d69d8,iVar3,*(int *)(param_2 + 0x58),FUN_08883afc,param_2);
    }
  }
  return;
}

