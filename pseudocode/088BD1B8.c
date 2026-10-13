/* Entry 0x088BD1B8 | file offset 0x000BA190 | FUN_088bd1b8 | bytes 192 */

void FUN_088bd1b8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    DAT_089d73b8 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d73b8,param_1,param_2);
    DAT_089d73bc = DAT_089d73b8 + 0x10;
  }
  if ((param_3 != 0) && (iVar1 = FUN_08869ab4(param_3,"friend_card.bin"), iVar1 != 0)) {
    uVar3 = *(undefined4 *)(iVar1 + 4);
    uVar4 = *(undefined4 *)(iVar1 + 8);
    uVar2 = FUN_088821c0();
    FUN_0887ac70(&DAT_09b68b48,uVar3,uVar4,uVar2);
  }
  return;
}

