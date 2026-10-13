/* Entry 0x088BC17C | file offset 0x000B9154 | FUN_088bc17c | bytes 648 */

void FUN_088bc17c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_3c = param_1 + 4;
  local_40 = param_1 + 8;
  local_44 = param_1 + 0xc;
  local_48 = param_1 + 0x10;
  local_4c = param_1 + 0x14;
  local_50 = param_1 + 0x18;
  iVar7 = param_1 + 0x1c;
  iVar6 = param_1 + 0x1d;
  iVar4 = param_1 + 0x1f;
  iVar3 = param_1 + 0x20;
  iVar1 = 0;
  iVar2 = param_1 + 0x21;
  iVar5 = param_1;
  do {
    iVar5 = iVar5 + 0x1e;
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,0,local_3c,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,1,local_40,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,2,local_44,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,3,local_48,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,4,local_4c,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,5,local_50,4);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,6,iVar7,1);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,7,iVar6,1);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,8,iVar5,1);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,9,iVar4,1);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,10,iVar3,1);
    FUN_088bcd34(param_2,(int)*(short *)(param_1 + 2),iVar1,0xb,iVar2,1);
    local_3c = local_3c + 0x1e;
    local_40 = local_40 + 0x1e;
    local_44 = local_44 + 0x1e;
    local_48 = local_48 + 0x1e;
    local_4c = local_4c + 0x1e;
    local_50 = local_50 + 0x1e;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 0x1e;
    iVar7 = iVar7 + 0x1e;
    iVar6 = iVar6 + 0x1e;
    iVar4 = iVar4 + 0x1e;
    iVar3 = iVar3 + 0x1e;
  } while (iVar1 < 3);
  return;
}

