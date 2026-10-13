/* Entry 0x0886F424 | file offset 0x0006C3FC | FUN_0886f424 | bytes 384 */

undefined4 FUN_0886f424(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_089d5f1f == '\0') {
    iVar1 = FUN_0886f378(param_1,PTR_DAT_089d5fa0);
    if (iVar1 == 0) {
      DAT_089d5fd1 = 1;
      DAT_089d5fc8 = FUN_0886f688(param_1,&DAT_08b63800);
      FUN_08935828(&DAT_08b63800,0,0x1bb78);
      if (DAT_089d5fc8 == 0) {
        uVar2 = FUN_0886ffd0(0,0,&DAT_08b63800,0x1bb78);
        DAT_089d5fc8 = FUN_0886f7a8(param_1,uVar2);
      }
      if (DAT_089d5fc8 == 0) {
        DAT_089d5fd2 = 0;
        uVar2 = 0;
      }
      else {
        DAT_089d5fd2 = 1;
        uVar2 = 1;
      }
    }
    else {
      DAT_089d5fd1 = 0;
      DAT_089d5fd2 = 0;
      if (param_2 != '\0') {
        if (0x400 < DAT_089d5fcc) {
          DAT_089d5fc8 = 1;
        }
        if (((iVar1 == -0x7ffdfcdf) || (iVar1 == -0x7ffefffe)) || (iVar1 == -0x7ffffffb)) {
          DAT_089d5fc8 = 2;
        }
      }
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

