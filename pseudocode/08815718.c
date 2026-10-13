/* Entry 0x08815718 | file offset 0x000126F0 | FUN_08815718 | bytes 516 */

undefined4 FUN_08815718(int param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x390) == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(int *)(param_1 + 0x178) == 0) {
    uVar2 = 0xfffffffd;
  }
  else {
    FUN_0881608c(param_1);
    if (param_3 == '\x01') {
      uVar2 = 0x3f800000;
    }
    else {
      uVar2 = 0;
    }
    FUN_08834df4(uVar2,param_1);
    *(undefined4 *)(param_1 + 0x45c) = 0;
    *(undefined4 *)(param_1 + 0x458) = 0;
    *(undefined4 *)(param_1 + 0x464) = 0;
    *(undefined4 *)(param_1 + 0x460) = 0;
    FUN_08824e24(param_1 + 0x570);
    FUN_0882130c(param_1 + 0x5dc);
    iVar1 = *(int *)(param_1 + 0x178);
    *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x38c);
    *(uint *)(param_1 + 0x388) = *(uint *)(param_1 + 0x388) & 0xfffffffd;
    if ((iVar1 == 0) ||
       (iVar1 = FUN_08934944(param_2,iVar1 + 8,*(undefined4 *)(iVar1 + 4),8,&LAB_08814b08),
       iVar1 == 0)) {
      FUN_08814fa0(param_1);
    }
    else {
      iVar1 = param_1 + 0x130;
      FUN_0882fa10(0,0,iVar1,param_2,0);
      FUN_0882f784(iVar1);
      FUN_08830444(0,iVar1);
      FUN_0886b240(*(undefined4 *)(param_1 + 0x394));
      FUN_0886ca58(*(undefined4 *)(param_1 + 0x394));
      FUN_0886ab1c(*(undefined4 *)(param_1 + 0x394),param_1 + 0x164,0);
      *(undefined4 *)(param_1 + 0x318) = 0;
      *(uint *)(param_1 + 0x380) = *(uint *)(param_1 + 0x380) & 0xfffffffe;
      (**(code **)(*(int *)(param_1 + 0x544) + 0xec))
                (param_1 + *(short *)(*(int *)(param_1 + 0x544) + 0xe8));
      FUN_08831994(param_1);
      uVar2 = FUN_0881baa8();
      iVar1 = FUN_0881c48c(uVar2);
      *(bool *)(param_1 + 0x4ec) = iVar1 == 0;
      *(uint *)(param_1 + 0x560) = *(uint *)(param_1 + 0x560) & 0xffffff0f | 0x20;
    }
    uVar2 = 0;
  }
  return uVar2;
}

