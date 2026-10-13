/* Entry 0x08822458 | file offset 0x0001F430 | FUN_08822458 | bytes 612 */

undefined4 FUN_08822458(float param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auStack_a0 [48];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 auStack_60 [64];
  float local_20;
  
  if ((*(uint *)(param_2 + 0x20) & 1) == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(char *)(param_2 + 0x30) == '\0') {
    uVar3 = 0;
  }
  else {
    local_20 = param_1;
    iVar2 = FUN_08822d58(param_2);
    if (iVar2 == 1) {
      uVar3 = 0;
    }
    else {
      fVar4 = local_20 / 30.0;
      if (fVar4 == 0.0) {
        uVar3 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x544);
        (**(code **)(iVar2 + 0xec))(*(int *)(param_2 + 0x24) + (int)*(short *)(iVar2 + 0xe8));
        FUN_089a3efc(auStack_a0,*(undefined4 *)(param_2 + 0x24));
        local_70 = 0;
        local_6c = 0;
        local_68 = 0;
        FUN_089a405c(auStack_60,auStack_a0);
        FUN_08823660(param_2);
        FUN_08823870(param_2);
        if (*(char *)(param_2 + 0x31) == '\0') {
          FUN_08824158(fVar4,param_2);
        }
        FUN_088242ec(param_2);
        FUN_088243d0(param_2);
        FUN_088244f4(param_2);
        iVar2 = -1;
        *(char *)(param_2 + 0x32) =
             (char)((*(char *)(param_2 + 0x32) + 1) % (int)*(char *)(param_2 + 0x30));
        if (*(char *)(param_2 + 0x31) == '\0') {
          iVar2 = (int)*(char *)(param_2 + 0x32);
        }
        FUN_08825de0(param_2,iVar2);
        FUN_08823954(param_2,auStack_a0);
        FUN_088261a8(fVar4,param_2,auStack_60);
        cVar1 = *(char *)(param_2 + 0x31);
        if (*(int *)(*(int *)(*(int *)(param_2 + 0x24) + 0x568) + 0x14) == 0) {
          if ((cVar1 == '\0') || (('\0' < cVar1 && (cVar1 < '\x03')))) {
            if (*(short *)(*(int *)(param_2 + 0x24) + 0x180) != 0x3e9) {
              FUN_088254fc(param_2);
            }
            FUN_08825910(param_2);
          }
          FUN_08826718(fVar4,param_2);
          FUN_08823bac(param_2);
          FUN_08823d28(fVar4,param_2);
          cVar1 = *(char *)(param_2 + 0x31);
        }
        iVar2 = -1;
        *(char *)(param_2 + 0x33) =
             (char)((*(char *)(param_2 + 0x33) + 1) %
                   (int)(((*(uint *)(param_2 + 0x20) & 0x1fe0) >> 5 ^ 0x80) - 0x80));
        if (cVar1 == '\0') {
          iVar2 = (int)*(char *)(param_2 + 0x33);
        }
        FUN_08826c00(fVar4,param_2,auStack_60,iVar2);
        if (*(char *)(param_2 + 0x31) == '\0') {
          FUN_08824784(param_2);
          FUN_08824938(param_2);
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

