/* Entry 0x089276B8 | file offset 0x00124690 | FUN_089276b8 | bytes 156 */

int FUN_089276b8(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = FUN_08862c40("original_quest_param.bin",1);
  iVar2 = FUN_08862c40("win_lose_condition_param.bin",1);
  iVar3 = FUN_08926144(param_1);
  iVar4 = FUN_08926164(param_1);
  iVar5 = FUN_089261bc(param_1);
  iVar6 = FUN_089261b4(param_1);
  return iVar3 + iVar1 + iVar2 + iVar4 + iVar5 + iVar6;
}

