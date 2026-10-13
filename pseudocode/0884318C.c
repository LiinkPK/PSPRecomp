/* Entry 0x0884318C | file offset 0x00040164 | FUN_0884318c | bytes 432 */

void FUN_0884318c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_130 [8];
  undefined1 local_128;
  undefined1 auStack_124 [256];
  
  uVar1 = FUN_0885c6cc(param_2,param_3,0,0,1,0);
  FUN_089359e8(*param_1 + 0x24);
  iVar2 = FUN_088b70c8((int)*(char *)(*param_1 + 6));
  uVar5 = 0;
  iVar4 = 0;
  do {
    local_130[iVar4] = *(undefined1 *)(iVar2 + 0x74 + iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  local_128 = 0;
  if (((param_4 & 1) == 0) || ((*(byte *)(*param_1 + 8) & 0x10) == 0)) {
    uVar3 = FUN_08867964();
    iVar2 = FUN_08844030(param_1);
    FUN_0893476c(auStack_124,"voice/%s/battle/voice_%s%s.scd",uVar3,local_130,iVar2 + 0x34);
  }
  else {
    uVar5 = FUN_08867964();
    FUN_0893476c(auStack_124,"voice/%s/battle/voice_%s_01.scd",uVar5,local_130);
    uVar5 = 1;
  }
  FUN_08842450(param_1 + 0x18);
  FUN_088a0d40();
  DAT_089d5f1c = 1;
  uVar3 = FUN_088fe708(auStack_124,uVar1,param_3,0);
  DAT_089d5f1c = 0;
  FUN_08842420(param_1 + 0x18,*param_1 + 0x24,uVar1,uVar3,uVar5);
  FUN_0885c538(param_2,uVar1,0);
  return;
}

