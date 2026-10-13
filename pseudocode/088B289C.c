/* Entry 0x088B289C | file offset 0x000AF874 | FUN_088b289c | bytes 316 */

void FUN_088b289c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    DAT_089d72b8 = FUN_088820d8(param_2 + (0x276 - *(int *)(param_1 + 8)) * 0x44);
    FUN_08935524(DAT_089d72b8,param_1,param_2);
    DAT_089d72bc = DAT_089d72b8 + 0x10;
    DAT_089d72c0 = DAT_089d72bc + *(int *)(DAT_089d72b8 + 8) * 0x44;
  }
  if (param_3 != 0) {
    iVar1 = FUN_08869ab4(param_3,"accessory.bin");
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 4);
      uVar4 = *(undefined4 *)(iVar1 + 8);
      uVar2 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b49118,uVar3,uVar4,uVar2);
    }
    iVar1 = FUN_08869ab4(param_3,"accessory_help.bin");
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 4);
      uVar4 = *(undefined4 *)(iVar1 + 8);
      uVar2 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b4d478,uVar3,uVar4,uVar2);
    }
  }
  return;
}

