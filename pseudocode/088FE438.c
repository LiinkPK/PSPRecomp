/* Entry 0x088FE438 | file offset 0x000FB410 | FUN_088fe438 | bytes 516 */

undefined4 FUN_088fe438(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar4 = 1;
  if ((uVar2 & 1) == 0) {
    if ((uVar2 & 4) == 0) {
      if ((uVar2 & 2) == 0) {
        iVar3 = FUN_088fdc98(param_1);
        if (iVar3 == 0) {
          FUN_088fca30(param_1);
          *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 2;
        }
      }
      else {
        iVar3 = *(int *)(*(int *)(param_1 + 0x2c) + 0x24);
        iVar3 = (**(code **)(iVar3 + 0x1c))
                          (*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar3 + 0x18));
        if (iVar3 == 0) {
          FUN_0887e77c(DAT_089d6998,*(undefined4 *)(param_1 + 0x2c));
          *(undefined4 *)(param_1 + 0x2c) = 0;
          FUN_0885c538(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c),0);
          *(undefined4 *)(param_1 + 0x1c) = 0;
          FUN_0885c488(*(undefined4 *)(param_1 + 0x20));
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 4;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18) + -1;
    *(int *)(param_1 + 0x18) = iVar3;
    if (iVar3 < 0) {
      uVar1 = FUN_0885c6cc(*(undefined4 *)(param_1 + 0x20),0x40000,0,0,1,0);
      *(undefined4 *)(param_1 + 0x1c) = uVar1;
      uVar1 = FUN_0887e74c(DAT_089d6998,uVar1,0x40000);
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 < 1) {
        if (-1 < iVar3) {
          FUN_088fd928(DAT_089d7f90,*(undefined4 *)(param_1 + 0x20),0x17,0x24,&DAT_089cd056,
                       0xffffffff,*(undefined4 *)(param_1 + 0x24),9,0,1,0,
                       *(undefined4 *)(param_1 + 0x2c));
        }
      }
      else if (iVar3 < 2) {
        FUN_088fd928(DAT_089d7f90,*(undefined4 *)(param_1 + 0x20),1,4,&DAT_089cd042,0x102b,
                     *(undefined4 *)(param_1 + 0x24),3,0,1,0,*(undefined4 *)(param_1 + 0x2c));
      }
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) & 0xfffffffe;
    }
  }
  return uVar4;
}

