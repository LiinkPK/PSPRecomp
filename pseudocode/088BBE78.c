/* Entry 0x088BBE78 | file offset 0x000B8E50 | FUN_088bbe78 | bytes 772 */

void FUN_088bbe78(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  
  local_3c = param_1 + 4;
  cVar1 = *(char *)(param_2 + 0x763);
  local_40 = param_1 + 8;
  local_44 = param_1 + 0xc;
  local_48 = param_1 + 0x10;
  local_4c = param_1 + 0x14;
  local_50 = param_1 + 0x18;
  iVar9 = param_1 + 0x1c;
  iVar8 = param_1 + 0x1d;
  iVar6 = param_1 + 0x1f;
  iVar5 = param_1 + 0x20;
  iVar3 = 0;
  iVar4 = param_1 + 0x21;
  iVar7 = param_1;
  do {
    iVar7 = iVar7 + 0x1e;
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,0,local_3c,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,1,local_40,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,2,local_44,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,3,local_48,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,4,local_4c,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,5,local_50,4);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,6,iVar9,1);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,7,iVar8,1);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,8,iVar7,1);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,9,iVar6,1);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,10,iVar5,1);
    FUN_088bcff0(param_2,(int)*(short *)(param_1 + 2),iVar3,0xb,iVar4,1);
    local_3c = local_3c + 0x1e;
    local_40 = local_40 + 0x1e;
    local_44 = local_44 + 0x1e;
    local_48 = local_48 + 0x1e;
    local_4c = local_4c + 0x1e;
    local_50 = local_50 + 0x1e;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x1e;
    iVar9 = iVar9 + 0x1e;
    iVar8 = iVar8 + 0x1e;
    iVar6 = iVar6 + 0x1e;
    iVar5 = iVar5 + 0x1e;
  } while (iVar3 < 3);
  iVar7 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + 0x5e + iVar7);
    if (uVar2 != 0xff) {
      uVar2 = uVar2 | 0x4000;
      FUN_088b7ed4(param_2,uVar2);
      FUN_088b764c(param_2 + cVar1 * 0xc6,iVar7,uVar2);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x20);
  return;
}

