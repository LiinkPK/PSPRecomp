/* Entry 0x088D87E4 | file offset 0x000D57BC | FUN_088d87e4 | bytes 200 */

undefined4 FUN_088d87e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = FUN_088d86c0();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pfVar3 = *(float **)(param_1 + 8);
    if (pfVar3 == (float *)0x0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 4),7,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      *(undefined2 *)(iVar1 + 0xe) = 10;
    }
    else if (*(short *)(pfVar3 + 3) == 6) {
      fVar4 = *pfVar3;
      FUN_088d9f5c(pfVar3,7,1);
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 10;
      FUN_088d9aec(5.0 - fVar4,*(undefined4 *)(param_1 + 8));
    }
    uVar2 = 0;
  }
  return uVar2;
}

