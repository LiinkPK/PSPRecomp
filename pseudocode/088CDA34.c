/* Entry 0x088CDA34 | file offset 0x000CAA0C | FUN_088cda34 | bytes 208 */

undefined4 FUN_088cda34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = FUN_088cd9d4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pfVar3 = *(float **)(param_1 + 8);
    if (pfVar3 == (float *)0x0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 4),0xf,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      *(undefined2 *)(iVar1 + 0xe) = 0x10;
    }
    else if (*(short *)(pfVar3 + 3) == 0x11) {
      fVar4 = *pfVar3;
      FUN_088d9f5c(pfVar3,0xf,1);
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 0x10;
      FUN_088d9aec(5.0 - fVar4,*(undefined4 *)(param_1 + 8));
    }
    FUN_088cd754(param_1);
    uVar2 = 0;
  }
  return uVar2;
}

