/* Entry 0x0880496C | file offset 0x00001944 | FUN_0880496c | bytes 564 */

void FUN_0880496c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 auStack_70 [48];
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  
  FUN_08831360();
  FUN_0880612c(param_1);
  if ((*(uint *)(param_1 + 0x580) & 1) != 0) {
    fVar3 = (float)FUN_08834e08(*(undefined4 *)(param_1 + 0x570),param_1,
                                (undefined4 *)(param_1 + 0x560));
    if (fVar3 < *(float *)(param_1 + 0x570)) {
      local_80 = *(undefined4 *)(param_1 + 0x560);
      local_7c = *(undefined4 *)(param_1 + 0x564);
      local_78 = *(undefined4 *)(param_1 + 0x568);
      local_74 = *(undefined4 *)(param_1 + 0x56c);
      FUN_088359a8(param_1,&local_80,1);
      *(uint *)(param_1 + 0x580) = *(uint *)(param_1 + 0x580) & 0xfffffffe;
    }
  }
  if ((*(uint *)(param_1 + 0x580) & 2) != 0) {
    iVar1 = FUN_089a3b70(param_1 + 0xf0);
    if (iVar1 != 1) {
      FUN_08835cf8(*(undefined4 *)(param_1 + 0x574),param_1,param_1 + 0xf0);
    }
  }
  if (0.0 < *(float *)(param_1 + 0x578)) {
    fVar3 = (float)FUN_08838300(param_1);
    fVar4 = *(float *)(param_1 + 0x9c);
    *(float *)(param_1 + 0x578) = *(float *)(param_1 + 0x578) - fVar3;
    fVar3 = (float)FUN_08838300(param_1);
    FUN_08835c54(fVar4 + *(float *)(param_1 + 0x57c) * fVar3,param_1);
  }
  if ((*(uint *)(param_1 + 0x580) & 4) != 0) {
    local_30 = *(float *)(param_1 + 0x84);
    local_40 = *(undefined4 *)(param_1 + 0x80);
    local_38 = *(undefined4 *)(param_1 + 0x88);
    local_3c = local_30 + 3.0;
    local_34 = local_40;
    local_2c = local_38;
    uVar2 = FUN_08899300();
    uVar2 = FUN_088976e4(uVar2,auStack_70,&local_40,0x22,1,0,0);
    *(undefined4 *)(param_1 + 0x84) = uVar2;
  }
  FUN_08805728(param_1);
  FUN_08804ba0(param_1);
  FUN_08806420(param_1);
  FUN_088059ec(param_1);
  FUN_08851974(param_1,*(undefined4 *)(param_1 + 0x550));
  FUN_0885436c(param_1 + 0xb1c,param_1);
  FUN_08859844(param_1);
  return;
}

