/* Entry 0x088BA25C | file offset 0x000B7234 | FUN_088ba25c | bytes 240 */

void FUN_088ba25c(undefined2 *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 uVar7;
  int local_20 [2];
  
  iVar4 = 0;
  iVar5 = 0x31;
  uVar7 = *param_2;
  puVar3 = param_1;
  puVar6 = param_2;
  do {
    uVar1 = puVar6[1];
    *puVar3 = uVar7;
    iVar4 = iVar4 + 4;
    puVar3[1] = uVar1;
    puVar6 = (undefined2 *)((int)param_2 + iVar4);
    iVar5 = iVar5 + -1;
    uVar7 = *puVar6;
    puVar3 = (undefined2 *)((int)param_1 + iVar4);
  } while (iVar5 != 0);
  *puVar3 = uVar7;
  iVar4 = 0;
  do {
    uVar2 = FUN_088b7b18(param_1,iVar4);
    FUN_088b97e8(local_20,uVar2);
    if ((local_20[0] != 0) && (param_3 < *(char *)(local_20[0] + 0xe))) {
      FUN_088b765c(param_1,iVar4,0xffffffff);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return;
}

