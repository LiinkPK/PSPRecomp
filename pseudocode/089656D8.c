/* Entry 0x089656D8 | file offset 0x001626B0 | FUN_089656d8 | bytes 984 */

void FUN_089656d8(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [64];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(int *)(param_3 + 0x2c) < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(param_2 + 0x88) + 0x1c8) + 0x30);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(param_3 + 0x2c) * 4) + 0x10);
    }
  }
  if (((*(char *)(param_3 + 0x48) == '\0') || (iVar3 != -1)) &&
     (iVar2 = FUN_08964eac(param_2,param_3,param_4), iVar2 != 0)) {
    iVar5 = *(int *)(*(int *)(param_2 + 0x8c) +
                     (uint)*(ushort *)
                            (*(int *)(*(int *)(param_2 + 0x90) + 8) +
                            (*(int *)(*(int *)(param_2 + 0x90) + 4) + 2) * 2) + 0x60);
    if (*(char *)(param_3 + 0x48) == '\0') {
      uVar6 = 0x19c;
      FUN_089a03dc(9);
      cVar7 = *(char *)(param_3 + 0x4f);
    }
    else {
      uVar6 = 0x19f;
      FUN_089a0384(9);
      if (*(char *)(param_3 + 0x4b) == '\0') {
        FUN_08973334(*(undefined4 *)(param_2 + 0xa4),iVar3,0,0,0,0);
        cVar7 = *(char *)(param_3 + 0x4f);
      }
      else {
        FUN_08973334(*(undefined4 *)(param_2 + 0xa4),iVar3,5,1,0,0);
        cVar7 = *(char *)(param_3 + 0x4f);
      }
    }
    if (cVar7 == '\0') {
      FUN_089a03dc(2);
    }
    else {
      FUN_089a0384(2);
    }
    FUN_089a03dc(5);
    FUN_089a0384(0x15);
    bVar1 = *(byte *)(param_3 + 0x51);
    if (bVar1 == 0) {
      FUN_089a12a4(0,2,3,0,0);
    }
    else if (bVar1 < 2) {
      FUN_089a12a4(0,2,10,0,0xffffffff);
    }
    else if (bVar1 < 3) {
      FUN_089a12a4(2,2,10,0,0xffffffff);
    }
    local_d0 = 0x3f800000;
    local_cc = 0;
    local_c8 = 0;
    local_c4 = 0;
    local_c0 = 0;
    local_bc = 0x3f800000;
    local_b8 = 0;
    local_b4 = 0;
    local_b0 = 0;
    local_ac = 0;
    local_a8 = 0x3f800000;
    local_a4 = 0;
    local_a0 = 0;
    local_9c = 0;
    local_98 = 0;
    local_94 = 0x3f800000;
    FUN_0896fb5c(&local_d0);
    if (*(char *)(param_3 + 0x55) == '\0') {
      FUN_0899ff9c(1,*(undefined1 *)(param_3 + 0x54));
      FUN_089a07f4(uVar6,4,*(undefined4 *)(iVar5 + 0x30),3,3,0,iVar2);
    }
    else {
      local_50 = 0x3f800000;
      local_4c = 0x3f800000;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      puVar4 = *(undefined1 **)
                (*(int *)(*(int *)(param_2 + 0x8c) + 0x48) +
                (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4);
      FUN_08946ac4(0x3f800000,param_2,*(int *)(param_2 + 0x8c),&local_d0,*puVar4,puVar4[1],puVar4[2]
                   ,&local_d0);
      iVar3 = *(int *)(param_2 + 0x8c);
      FUN_08947b88(0x3f800000,param_2,iVar3,*(undefined4 *)(iVar3 + 0x50),
                   *(undefined1 *)
                    (*(int *)(*(int *)(iVar3 + 0x48) +
                             (uint)*(ushort *)(*(int *)(*(int *)(param_2 + 0x90) + 8) + 2) * 4) + 1)
                   ,3,param_3 + 0x20,&local_50,auStack_90);
      uVar8 = FUN_0896fd08(&local_d0,auStack_90);
      FUN_0896fd88(uVar8);
      FUN_0899ff9c(1,*(undefined1 *)(param_3 + 0x54));
      FUN_089a07f4(uVar6,4,*(undefined4 *)(iVar5 + 0x30),3,3,0,iVar2);
      FUN_0896fe50();
    }
    FUN_089a0384(2);
  }
  return;
}

