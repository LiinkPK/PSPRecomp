/* Entry 0x088B1CC0 | file offset 0x000AEC98 | FUN_088b1cc0 | bytes 220 */

void FUN_088b1cc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_2 != 0) {
    DAT_089d7290 = FUN_088820d8(param_2 + (0x328 - *(int *)(param_1 + 8)) * 0x28);
    FUN_08935524(DAT_089d7290,param_1,param_2);
    DAT_089d7294 = DAT_089d7290 + 0x10;
  }
  if ((param_3 != 0) && (iVar1 = FUN_08869ab4(param_3,"ability.bin"), iVar1 != 0)) {
    uVar3 = *(undefined4 *)(iVar1 + 4);
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088821c0();
    FUN_0887ac70(&DAT_09b49108,uVar3,uVar4,uVar2);
  }
  return;
}

