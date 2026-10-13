/* Entry 0x088CE72C | file offset 0x000CB704 | FUN_088ce72c | bytes 200 */

undefined4 FUN_088ce72c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float *pfVar3;
  float fVar4;
  
  iVar1 = FUN_088ce71c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    pfVar3 = *(float **)(param_1 + 8);
    if (pfVar3 == (float *)0x0) {
      iVar1 = FUN_088daa40(*(undefined4 *)(param_1 + 4),4,0);
      *(int *)(param_1 + 8) = iVar1;
      if (iVar1 == 0) {
        return 0xfffffffe;
      }
      *(undefined2 *)(iVar1 + 0xe) = 5;
    }
    else if (*(short *)(pfVar3 + 3) == 3) {
      fVar4 = *pfVar3;
      FUN_088d9f5c(pfVar3,4,1);
      *(undefined2 *)(*(int *)(param_1 + 8) + 0xe) = 5;
      FUN_088d9aec(5.0 - fVar4,*(undefined4 *)(param_1 + 8));
    }
    uVar2 = 0;
  }
  return uVar2;
}

