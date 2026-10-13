/* Entry 0x0881006C | file offset 0x0000D044 | FUN_0881006c | bytes 304 */

void FUN_0881006c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 auStack_70 [12];
  undefined4 local_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [4];
  
  FUN_088101d8(param_1,param_2);
  fVar4 = 3.4028235e+38;
  iVar2 = 0;
  do {
    iVar1 = FUN_0886b6bc(*(undefined4 *)(param_2 + 0x98),auStack_70,auStack_60,auStack_50,auStack_40
                         ,iVar2);
    if (iVar1 == 1) {
      local_64 = 0x3f800000;
      FUN_089a3f40(auStack_70,param_2 + 0xd0,auStack_70);
      fVar3 = (float)FUN_089a3c18(param_2 + 0x110,auStack_70);
      if (fVar3 < fVar4) {
        *(int *)(param_2 + 0xb0) = iVar2;
        fVar4 = fVar3;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  FUN_08810234(param_1,param_2);
  *(undefined4 *)(param_2 + 0xb4) = 2;
  return;
}

