/* Entry 0x088DF15C | file offset 0x000DC134 | FUN_088df15c | bytes 348 */

undefined4 FUN_088df15c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  iVar1 = FUN_088df2b8();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if ((*(int *)(param_1 + 4) == 1) && (*(char *)(param_1 + 0x14) == '\x01')) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
      iVar1 = (*pcVar3)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar3,0x40,0);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xc) = 0;
        if (*(char *)(param_1 + 1) == '\0') {
          FUN_088d3508(0);
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
      iVar1 = (*pcVar3)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar3,0x80,0);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0xc) = 1;
        if (*(char *)(param_1 + 1) == '\0') {
          FUN_088d3508(0);
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = *(int *)(param_1 + 0x10);
        }
      }
      else {
        iVar1 = *(int *)(param_1 + 0x10);
      }
      pcVar3 = *(code **)(*(int *)(iVar1 + 0x34) + 0x14);
      iVar1 = (*pcVar3)(iVar1 + *(short *)(*(int *)(iVar1 + 0x34) + 0x10),pcVar3,4,0);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 8) = 1;
        *(undefined4 *)(param_1 + 4) = 2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

