/* Entry 0x088BB778 | file offset 0x000B8750 | FUN_088bb778 | bytes 276 */

void FUN_088bb778(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    DAT_089d7388 = FUN_088820d8(param_2);
    FUN_08935524(DAT_089d7388,param_1,param_2);
    FUN_08935970(DAT_089d7388,&DAT_089cb9e8);
    DAT_089d738c = DAT_089d7388 + 0x10;
  }
  if (param_3 != 0) {
    iVar1 = FUN_08869ab4(param_3,"dungeon_skill.bin");
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 4);
      uVar4 = *(undefined4 *)(iVar1 + 8);
      uVar2 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b4e838,uVar3,uVar4,uVar2);
    }
    iVar1 = FUN_08869ab4(param_3,"dungeon_skill_help.bin");
    if (iVar1 != 0) {
      uVar3 = *(undefined4 *)(iVar1 + 4);
      uVar4 = *(undefined4 *)(iVar1 + 8);
      uVar2 = FUN_088821c0();
      FUN_0887ac70(&DAT_09b4e848,uVar3,uVar4,uVar2);
    }
  }
  return;
}

